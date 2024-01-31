@class NSString, NSUUID, NSURL, NSDate, NSData, VMVoicemailTranscript;

@interface VMVoicemail : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (readonly, nonatomic, getter=isDataAvailable) BOOL dataAvailable;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, nonatomic, getter=isDetached) BOOL detached;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, nonatomic, getter=isTemporary) BOOL temporary;
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property (readonly, nonatomic, getter=isUnread) BOOL unread;
@property (nonatomic) unsigned long long flags;
@property (readonly, nonatomic) NSString *sender;
@property (readonly, nonatomic) NSString *callbackNumber;
@property (readonly, nonatomic) NSString *dataPath;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned long long remoteUID;
@property (nonatomic) unsigned long long identifier;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *senderDestinationID;
@property (retain, nonatomic) NSString *senderISOCountryCode;
@property (retain, nonatomic) NSString *callbackDestinationID;
@property (retain, nonatomic) NSString *callbackISOCountryCode;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSURL *dataURL;
@property (retain, nonatomic) NSString *receiverDestinationID;
@property (retain, nonatomic) NSString *receiverLabelID;
@property (retain, nonatomic) NSString *receiverISOCountryCode;
@property (retain, nonatomic) NSURL *transcriptionURL;
@property (nonatomic) long long mailboxType;
@property (nonatomic, getter=isBlocked) BOOL blocked;
@property (nonatomic, getter=isDataAvailable) BOOL dataAvailable;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (nonatomic, getter=isDetached) BOOL detached;
@property (nonatomic, getter=isDownloading) BOOL downloading;
@property (nonatomic, getter=isRead) BOOL read;
@property (nonatomic, getter=isTemporary) BOOL temporary;
@property (nonatomic, getter=isTranscriptionAvailable) BOOL transcriptionAvailable;
@property (nonatomic, getter=isTrashed) BOOL trashed;
@property (nonatomic) unsigned long long flags;
@property (readonly, nonatomic) BOOL hasCallbackNumber;
@property (readonly, retain, nonatomic) VMVoicemailTranscript *transcript;
@property (readonly, nonatomic, getter=isTranscriptionRated) BOOL transcriptionRated;
@property (readonly, nonatomic) unsigned long long transcriptionState;
@property (readonly, nonatomic) NSData *data;

+ (unsigned long long)flagsByApplyingMailboxType:(long long)a0 toFlags:(unsigned long long)a1;
+ (long long)mailboxTypeForFlags:(unsigned long long)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isTranscribing;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)flagDescription;
- (BOOL)hasSameContent:(id)a0;
- (id)contactUsingContactStore:(id)a0;
- (id)contactUsingContactStore:(id)a0 withKeysToFetch:(id)a1;
- (id)displayLabelUsingContactStore:(id)a0;
- (id)displayNameUsingContactStore:(id)a0;
- (BOOL)doesNotHaveFlags:(unsigned long long)a0;
- (BOOL)hasFlags:(unsigned long long)a0;
- (BOOL)hasSameFlags:(id)a0;
- (id)initWithVoicemailMessage:(id)a0;
- (BOOL)isContactSuggested:(id)a0;
- (BOOL)isSameMessage:(id)a0;
- (id)mailboxTypeDescription;
- (void)setFlag:(unsigned long long)a0 enabled:(BOOL)a1;
- (BOOL)wasTranscriptionAttempted;

@end
