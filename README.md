## 流媒体服务器系统
#### 基于Server/Client模型（CS）开发，实现可以播放MP3格式的音乐广播系统。

### 需求设计和分析：

##### 设计：
   实现一个音乐广播系统，可以支持流量控制，基于客户端/服务端模型开发，用户可自由选择音乐频道。
   进一步回顾系统编程与网络编程内容。
##### 分析：
  由于是广播系统，通讯采用无连接的udp组播技术；（组播相对于广播更加节省资源）；
  
  为了让用户可以了解到每一个频道都是什么类型，提升用户体验，因此在各音乐频道的基础之上添加节目单频道；
  
  这样无需遍历每一个频道，就可以知道每个频道的内容；由于广播内容是流媒体格式（音乐，视频）内容，所以需要流量控制，流量控制采用令牌桶实现，支持设定传输速率。
  
  采用多线程方式发送频道数据，不涉及线程之间通信，考虑令牌桶之间的资源互斥访问。服务器最后以守护进程方式运行，系统运行过程中的数据采用系统日志留存。

### 服务器架构设计

![45d5c6a09eef9327e70b8a79ca2e5f8](https://user-images.githubusercontent.com/50191422/138920509-804653a0-157e-4378-b4d2-b3b61c025bae.png)

### 构建入门

```bash
$ cd client/
$ make
$ cd ../server
$ make
```
