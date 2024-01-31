@class NSString;

@interface SiriMessageTypes.RequestMessageBase : SiriMessageTypes.SessionMessageBase {
    void /* unknown type, empty encoding */ requestId;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
