@class NSString, CHMutableTokenizedTextResult;

@interface CHResultWithContext : NSObject {
    int _contentType;
    NSString *_leftContext;
    CHMutableTokenizedTextResult *_result;
}

@property (readonly, nonatomic) NSString *leftContext;
@property (readonly) int contentType;
@property (readonly, nonatomic) CHMutableTokenizedTextResult *result;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0 leftContext:(id)a1 contentType:(int)a2;

@end
