@class NSArray, MFMimePart, NSMutableData, NSData;

@interface MFProgressiveMimeParser : NSObject {
    NSMutableData *_data;
    NSArray *_preserveHeaders;
    id _delegate;
    id _context;
    unsigned long long _cursor;
    unsigned long long _lastLength;
    MFMimePart *_topLevelPart;
    MFMimePart *_currentPart;
    NSData *_currentBoundary;
    struct { unsigned char delegateBeganMimePart : 1; unsigned char delegateFinishedMimePart : 1; unsigned char delegateBeganData : 1; unsigned char delegateFailed : 1; unsigned char state : 3; } _parserFlags;
}

- (void)dealloc;
- (void)_reportError:(id)a0;
- (void)start;
- (id)context;
- (id)data;
- (void)setContext:(id)a0;
- (void)setDelegate:(id)a0;
- (void)_continueParsing;
- (void)_continueParsingBody;
- (void)_continueParsingHeaders;
- (void)_continueParsingStartOfPart;
- (id)_currentBoundary;
- (void)_initializeTopLevelPartWithHeaders:(id)a0;
- (id)currentPart;
- (id)initWithBodyData:(id)a0 topLevelHeaders:(id)a1 headersToPreserve:(id)a2;
- (void)noteDataLengthChanged:(unsigned int)a0;
- (id)topLevelPart;

@end
