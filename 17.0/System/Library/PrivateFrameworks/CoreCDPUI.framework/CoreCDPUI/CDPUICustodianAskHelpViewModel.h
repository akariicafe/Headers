@class NSString, CDPEscapeOption, CDPRemoteValidationEscapeOffer;

@interface CDPUICustodianAskHelpViewModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *footer;
@property (retain, nonatomic) CDPEscapeOption *getHelpNowOption;
@property (retain, nonatomic) CDPRemoteValidationEscapeOffer *dontAskForHelpOption;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
