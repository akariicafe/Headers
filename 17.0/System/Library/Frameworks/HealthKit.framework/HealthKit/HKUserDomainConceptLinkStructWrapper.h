@class NSUUID, NSString;

@interface HKUserDomainConceptLinkStructWrapper : NSObject {
    void /* unknown type, empty encoding */ value;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSUUID *target;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (id)initWithLink:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTarget:(id)a0 type:(long long)a1;

@end
