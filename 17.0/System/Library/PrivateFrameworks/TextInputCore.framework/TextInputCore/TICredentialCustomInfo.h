@class NSDictionary, NSUUID;

@interface TICredentialCustomInfo : NSObject

@property (readonly, nonatomic) NSDictionary *customInfo;
@property (readonly, nonatomic) NSUUID *documentIdentifier;

- (void).cxx_destruct;
- (id)initWithCustomInfo:(id)a0 documentIdentifier:(id)a1;

@end
