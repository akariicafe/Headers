@class NSString, NSArray;

@interface DocumentUnderstanding.DUDocumentMessageData : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ conversationIdentifier;
    void /* unknown type, empty encoding */ creatorHandle;
    void /* unknown type, empty encoding */ recipientHandles;
    void /* unknown type, empty encoding */ recipientNames;
    void /* unknown type, empty encoding */ attachmentFileName;
    void /* unknown type, empty encoding */ attachmentFilePath;
}

@property (nonatomic, copy) NSString *conversationIdentifier;
@property (nonatomic, copy) NSString *creatorHandle;
@property (nonatomic, copy) NSArray *recipientHandles;
@property (nonatomic, copy) NSArray *recipientNames;
@property (nonatomic, copy) NSString *attachmentFileName;
@property (nonatomic, copy) NSString *attachmentFilePath;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
