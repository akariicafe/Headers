@class NSString, NSDate;

@interface WBSPerSitePreferenceValueInformation : NSObject

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSDate *creationDate;

- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 value:(id)a1 creationDate:(id)a2;

@end
