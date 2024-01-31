@class NSSet, _EXExtensionAvailablility;

@interface _EXQueryResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSSet *identities;
@property (readonly) _EXExtensionAvailablility *availablility;

- (id)initWithIdentities:(id)a0;
- (id)initWithIdentities:(id)a0 availablility:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithIdentities:(id)a0 availablility:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithAvailablility:(id)a0;

@end
