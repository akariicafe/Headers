@class NSString, NSNumber;

@interface SSVRepairApplicationRequest : SSRequest <SSXPCCoding>

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSNumber *accountDSID;
@property (readonly, nonatomic) long long claimStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithBundleID:(id)a0 accountIdentifier:(id)a1 claimStyle:(long long)a2;
- (void)startWithResponseBlock:(id /* block */)a0;

@end
