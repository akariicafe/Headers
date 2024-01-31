@interface FSItemSetAttributesRequest : FSItemAttributes {
    unsigned long long attrsConsumed;
}

@property (nonatomic) BOOL uidWasConsumed;
@property (nonatomic) BOOL gidWasConsumed;
@property (nonatomic) BOOL typeWasConsumed;
@property (nonatomic) BOOL modeWasConsumed;
@property (nonatomic) BOOL numLinksWasConsumed;
@property (nonatomic) BOOL bsdFlagsWasConsumed;
@property (nonatomic) BOOL sizeWasConsumed;
@property (nonatomic) BOOL allocSizeWasConsumed;
@property (nonatomic) BOOL fileidWasConsumed;
@property (nonatomic) BOOL parentidWasConsumed;
@property (nonatomic) BOOL accessTimeWasConsumed;
@property (nonatomic) BOOL changeTimeWasConsumed;
@property (nonatomic) BOOL modifyTimeWasConsumed;
@property (nonatomic) BOOL addedTimeWasConsumed;
@property (nonatomic) BOOL birthTimeWasConsumed;
@property (nonatomic) BOOL backupTimeWasConsumed;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (BOOL)internalFlagsWasConsumed;
- (void)setInternalFlagsWasConsumed:(BOOL)a0;

@end
