@class NSArray;

@interface SNFileListingResult : NSObject <SNResult> {
    void /* unknown type, empty encoding */ fileItems;
}

@property (nonatomic, readonly) NSArray *fileItems;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileItems:(id)a0;

@end
