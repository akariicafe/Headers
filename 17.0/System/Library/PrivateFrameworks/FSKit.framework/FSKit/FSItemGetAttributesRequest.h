@interface FSItemGetAttributesRequest : NSObject <NSSecureCoding> {
    unsigned long long attrsWanted;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL uidWanted;
@property (nonatomic) BOOL gidWanted;
@property (nonatomic) BOOL typeWanted;
@property (nonatomic) BOOL modeWanted;
@property (nonatomic) BOOL numLinksWanted;
@property (nonatomic) BOOL bsdFlagsWanted;
@property (nonatomic) BOOL sizeWanted;
@property (nonatomic) BOOL allocSizeWanted;
@property (nonatomic) BOOL fileidWanted;
@property (nonatomic) BOOL parentidWanted;
@property (nonatomic) BOOL accessTimeWanted;
@property (nonatomic) BOOL changeTimeWanted;
@property (nonatomic) BOOL modifyTimeWanted;
@property (nonatomic) BOOL addedTimeWanted;
@property (nonatomic) BOOL birthTimeWanted;
@property (nonatomic) BOOL backupTimeWanted;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (BOOL)internalFlagsWanted;
- (void)setInternalFlagsWanted:(BOOL)a0;

@end
