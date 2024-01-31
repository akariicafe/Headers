@class NSData, NSString, GDSourceListenerConfigIdentifier;

@interface GDViewUpdateSourceResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) GDSourceListenerConfigIdentifier *configIdentifier;
@property (readonly, nonatomic) NSData *bookmark;
@property (readonly, nonatomic) NSString *response;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithConfigIdentifier:(id)a0 bookmark:(id)a1 response:(id)a2;

@end
