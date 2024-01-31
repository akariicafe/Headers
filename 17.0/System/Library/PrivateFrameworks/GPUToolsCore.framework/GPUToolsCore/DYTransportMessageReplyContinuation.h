@interface DYTransportMessageReplyContinuation : DYContinuation {
    unsigned long long timeout;
    unsigned int replyCount;
}

- (void)dispatchError:(id)a0;

@end
