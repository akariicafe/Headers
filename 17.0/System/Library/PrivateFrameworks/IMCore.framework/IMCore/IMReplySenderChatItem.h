@class NSString;

@interface IMReplySenderChatItem : IMSenderChatItem {
    NSString *_threadIdentifier;
}

- (id)threadIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0 handle:(id)a1 threadIdentifier:(id)a2;

@end
