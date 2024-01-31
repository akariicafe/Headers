@class NSArray, NSString, WFImgurUploadAction;

@interface WFImgurAccessResource : WFAccountAccessResource <WFActionEventObserver>

@property (readonly, copy, nonatomic) NSArray *accounts;
@property (weak, nonatomic) WFImgurUploadAction *action;
@property (nonatomic) BOOL usesAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
