@class NSString, MPModelKind, NSOperationQueue, NSArray, MPPropertySet;

@interface MPModelRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) BOOL requiresNetwork;
@property (class, readonly, nonatomic) NSOperationQueue *preferredQueue;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) MPModelKind *sectionKind;
@property (copy, nonatomic) MPPropertySet *sectionProperties;
@property (copy, nonatomic) NSArray *sectionSortDescriptors;
@property (retain, nonatomic) MPModelKind *itemKind;
@property (copy, nonatomic) MPPropertySet *itemProperties;
@property (copy, nonatomic) NSArray *itemSortDescriptors;
@property (retain, nonatomic) Class sectionClass;
@property (retain, nonatomic) Class itemClass;

+ (id)sharedQueue;
+ (id)sharedNetworkQueue;

- (void)performWithResponseHandler:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_kindForClass:(Class)a0;
- (void)responseWithCompletion:(id /* block */)a0;

@end
