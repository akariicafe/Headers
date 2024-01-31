@class NSString, NSError;

@interface SNFileDeletionResult : NSObject <SNResult> {
    void /* unknown type, empty encoding */ fileName;
    void /* unknown type, empty encoding */ error;
}

@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileName:(id)a0 error:(id)a1;

@end
