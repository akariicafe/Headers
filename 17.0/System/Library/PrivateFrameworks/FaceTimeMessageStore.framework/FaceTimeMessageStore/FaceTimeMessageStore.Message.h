@class NSString;

@interface FaceTimeMessageStore.Message : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ recordUUID;
    void /* unknown type, empty encoding */ callUUID;
    void /* unknown type, empty encoding */ conversationID;
    void /* unknown type, empty encoding */ messageFile;
    void /* unknown type, empty encoding */ messageThumbnail;
    void /* unknown type, empty encoding */ messageType;
    void /* unknown type, empty encoding */ transcript;
    void /* unknown type, empty encoding */ from;
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ dateCreated;
    void /* unknown type, empty encoding */ dateModified;
    void /* unknown type, empty encoding */ isRead;
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ mailboxType;
    void /* unknown type, empty encoding */ isSensitive;
    void /* unknown type, empty encoding */ recipient;
    void /* unknown type, empty encoding */ transcriptionStatus;
    void /* unknown type, empty encoding */ isRTT;
    void /* unknown type, empty encoding */ simID;
    void /* unknown type, empty encoding */ quality;
    void /* unknown type, empty encoding */ voicemailID;
    void /* unknown type, empty encoding */ sandboxMessageFile;
    void /* unknown type, empty encoding */ sandboxThumbnailFile;
    void /* unknown type, empty encoding */ sandboxTranscriptFile;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
