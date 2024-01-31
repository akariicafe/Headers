@class NSString;

@interface DRRequestStateStats : DRSRequestStats

@property (readonly, nonatomic) NSString *requestState;

+ (id)keyName;
+ (id)descriptionStringForRequest:(id)a0;

@end
