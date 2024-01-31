@class NSString, NSAttributedString;

@interface SFWebpageStatusBarInfoMessage : NSObject <SFWebPageStatusBarMessage> {
    NSString *_message;
}

@property (readonly, nonatomic) NSAttributedString *attributedMessageString;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
