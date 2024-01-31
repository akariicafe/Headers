@class HKSource, NSUUID, NSSet;

@interface HKAuthorizationRequestRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKSource *source;
@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, copy, nonatomic) NSSet *typesRequiringShareAuthorization;
@property (readonly, copy, nonatomic) NSSet *typesRequiringReadAuthorization;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSource:(id)a0 session:(id)a1 readTypes:(id)a2 writeTypes:(id)a3;

@end
