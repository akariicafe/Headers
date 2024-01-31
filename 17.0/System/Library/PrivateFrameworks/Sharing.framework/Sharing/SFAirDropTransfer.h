@class NSArray, NSString, NSProgress, NSURL, NSError, SFAirDropTransferMetaData, SFAirDropAction;

@interface SFAirDropTransfer : NSObject <NSSecureCoding, NSCopying> {
    BOOL _usedByTransferManager;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *customDestinationURL;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) SFAirDropTransferMetaData *metaData;
@property (nonatomic) unsigned long long userResponse;
@property (nonatomic) unsigned long long transferState;
@property (nonatomic) unsigned long long failureReason;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSProgress *transferProgress;
@property (retain, nonatomic) id progressToken;
@property (copy, nonatomic) NSString *contentsTitle;
@property (copy, nonatomic) NSString *contentsDescription;
@property (retain, nonatomic) SFAirDropAction *selectedAction;
@property (retain, nonatomic) NSArray *possibleActions;
@property (retain, nonatomic) SFAirDropAction *cancelAction;
@property (nonatomic) BOOL willOpenInMRQL;
@property (copy, nonatomic) NSArray *completedURLs;
@property (readonly, nonatomic) BOOL isJustFiles;
@property (readonly, nonatomic) unsigned long long itemCount;
@property (readonly, copy, nonatomic) NSArray *sensitiveURLs;
@property (readonly, nonatomic) BOOL needsAction;

+ (BOOL)automaticallyNotifiesObserversOfFailureReason;
+ (BOOL)automaticallyNotifiesObserversOfTransferState;
+ (BOOL)automaticallyNotifiesObserversOfUserResponse;
+ (id)keyPathsForValuesAffectingNeedsAction;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateWithInformation:(id)a0;
- (id)initWithIdentifier:(id)a0 initialInformation:(id)a1;
- (id)initWithIdentifier:(id)a0 metaData:(id)a1 userResponse:(unsigned long long)a2 transferState:(unsigned long long)a3 failureReason:(unsigned long long)a4 error:(id)a5 customDestinationURL:(id)a6 contentsTitle:(id)a7 contentsDescription:(id)a8 selectedAction:(id)a9 possibleActions:(id)a10 cancelAction:(id)a11 completedURLs:(id)a12;
- (void)setUpProgress;
- (void)setUpProgressToBroadcast:(BOOL)a0;
- (BOOL)updateUsingCoder:(id)a0;
- (BOOL)updateWithTransfer:(id)a0;

@end
