@class NSString, NSURL;

@interface SNFileCopyingResult : NSObject <SNResult> {
    void /* unknown type, empty encoding */ filename;
    void /* unknown type, empty encoding */ itemURL;
}

@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ fileSize;
@property (nonatomic, readonly) NSURL *itemURL;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileItem:(id)a0;

@end
