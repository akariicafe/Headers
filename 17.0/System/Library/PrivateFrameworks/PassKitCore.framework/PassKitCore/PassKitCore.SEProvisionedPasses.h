@class NSString;

@interface PassKitCore.SEProvisionedPasses : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ externalProvisioningMode;
    void /* unknown type, empty encoding */ isExpressModeSetupOptional;
    void /* unknown type, empty encoding */ cardIdentifier;
    void /* unknown type, empty encoding */ notificationSuppressionAssertion;
    void /* unknown type, empty encoding */ passUniqueIdentifiers;
    void /* unknown type, empty encoding */ passesForUniqueIdentifier;
    void /* unknown type, empty encoding */ moreInfoItemsForPass;
    void /* unknown type, empty encoding */ suppressMakeDefaultOfferForPass;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)passLibraryDidChangeWithNotification:(id)a0;

@end
