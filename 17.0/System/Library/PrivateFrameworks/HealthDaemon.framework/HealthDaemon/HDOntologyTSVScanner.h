@class NSScanner;

@interface HDOntologyTSVScanner : NSObject {
    NSScanner *_scanner;
}

@property (readonly, getter=isAtEnd) BOOL atEnd;

- (id)init;
- (id)description;
- (BOOL)scanLongLong:(long long *)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)scanString:(id *)a0;

@end
