@class NSString;

@interface DCPresentmentRequestedElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *elementIdentifier;
@property (nonatomic) unsigned long long intentToRetain;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithElementIdentifier:(id)a0 intentToRetain:(unsigned long long)a1;

@end
