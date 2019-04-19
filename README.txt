#C++ TCP练习

使用教程：
	1：启动程序之前，在Client的代码中修改服务器地址（MainApp.cpp中）
	2：启动客户端与服务器程序（无先后顺序）
	3：客户端输入相关指令（指令均已 & 作为分隔符）
		3.1：登录指令 login&用户名&密码（默认均为admin）
		3.2: 生成随机数指令 random&组数&单组长度
		3.3：退出登录 exit
	4：服务端允许多个客户端同时连入

代码简分析：
	1：客户端代码比较简单，主要完成用户信息发送与接收信息回显。
	2：服务端：
		2.1 自定义服务程序：main程序中 custom custom; base *b = &custom; 其中base类是定义基类，custom是继承base的基类，custom 需要重写 base 的 deal_with(LPVOID lpParameter)方法，作为服务端服务逻辑程序（用户自定义）
		2.2 TCPHelper 是TCP连接的管理类，可以实现自动socket管理，只需用户指定监听端口，最大排列数和用户自定义处理函数即可（传入base 对象，一定要实现方法的重写）。
		2.3 不足：TCPHelper中使用数组来管理已经连入的socket,更好的方法是使用vector之类的容器，以便高效的进行管理。
		
		