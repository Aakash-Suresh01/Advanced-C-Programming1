Datagram socket:

This facilitates the socket Communication between 2 processes using the UDP Protocol. The datagram sockets establish connections that are less reliable than TCP protocol. Only the quick transfer of data is emphasized more than reliable transfer. The steps on each side of the process are:

Server-side:

1. socket()
2. bind()
3. recvfrom()
4. sendto()
5. close()

Client-side:
1. socket()
2. sendto()
3. recvfrom()
4. close()
