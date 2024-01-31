@class NSString;

@interface FaceTimeMessageStore.MessageUpdate : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ recordUUID;
    void /* unknown type, empty encoding */ callUUID;
    void /* unknown type, empty encoding */ conversationID;
    void /* unknown type, empty encoding */ from;
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ isRead;
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ mailboxType;
    void /* unknown type, empty encoding */ recipient;
    void /* unknown type, empty encoding */ transcriptionStatus;
    void /* unknown type, empty encoding */ isRTT;
    void /* unknown type, empty encoding */ transcriptURL;
    void /* unknown type, empty encoding */ simID;
    void /* unknown type, empty encoding */ dateCreated;
    void /* unknown type, empty encoding */ voicemailID;
    void /* unknown type, empty encoding */ undelete;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
