@class NSUUID, WFVariableString;

@interface WFChooseFromMenuItemSynonym : NSObject

@property (readonly, nonatomic) NSUUID *identity;
@property (readonly, nonatomic) WFVariableString *synonym;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentity:(id)a0 synonym:(id)a1;

@end
