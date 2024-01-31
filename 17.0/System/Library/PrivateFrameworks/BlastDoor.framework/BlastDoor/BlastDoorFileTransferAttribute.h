@class NSArray, NSString;

@interface BlastDoorFileTransferAttribute : NSObject {
    void /* unknown type, empty encoding */ attachments;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ utiType;
    void /* unknown type, empty encoding */ mimeType;
}

@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, retain) void /* unknown type, empty encoding */ imageInfo;
@property (nonatomic, retain) void /* unknown type, empty encoding */ attachmentSubtype;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) void /* unknown type, empty encoding */ datasize;
@property (nonatomic, copy) NSString *utiType;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, retain) void /* unknown type, empty encoding */ legacyAnimoji;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
