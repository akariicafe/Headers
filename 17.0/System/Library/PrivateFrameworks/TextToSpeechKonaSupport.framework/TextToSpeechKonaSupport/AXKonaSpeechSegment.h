@class NSDictionary, NSString, AXKonaMarker;

@interface AXKonaSpeechSegment : NSObject {
    char *_latin1String;
}

@property (class, readonly) NSDictionary *encodingReplacements;

@property (retain, nonatomic) NSString *text;
@property (nonatomic) unsigned long long latin1StringLength;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) AXKonaMarker *marker;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (char *)latin1String;

@end
