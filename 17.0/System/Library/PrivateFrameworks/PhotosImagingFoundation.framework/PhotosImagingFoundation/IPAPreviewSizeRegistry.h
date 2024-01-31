@class NSString, NSMutableDictionary;

@interface IPAPreviewSizeRegistry : NSObject {
    NSString *_name;
    NSMutableDictionary *_policies;
}

- (void)addPolicy:(id)a0;
- (id)init;
- (id)initWithName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)policyForStyle:(unsigned long long)a0;
- (id)policyForStyleObject:(id)a0;

@end
