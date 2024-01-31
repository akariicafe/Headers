@class NSString;

@interface NAIdentityCharacteristic : NSObject <NAHashable, NAEquatable, NSCopying>

@property (copy, nonatomic) id /* block */ retrievalBlock;
@property (copy, nonatomic) id /* block */ comparisonBlock;
@property (copy, nonatomic) id /* block */ hashBlock;
@property (nonatomic) long long role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
