@class NSString;

@interface FPTestingContentFetch : FPTestingOperation <NSFileProviderTestingContentFetch>

@property (readonly, nonatomic) unsigned long long side;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)asContentFetch;
- (id)initWithOperationIdentifier:(id)a0 itemIdentifier:(id)a1;

@end
