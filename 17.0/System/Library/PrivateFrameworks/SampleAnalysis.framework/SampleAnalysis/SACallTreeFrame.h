@class NSArray, NSString, SAFrame, NSMutableArray;

@interface SACallTreeFrame : SACallTreeNode <SAJSONSerialization> {
    BOOL _isLeafFrame;
    NSMutableArray *_children;
}

@property (readonly) BOOL isTruncatedLeafCallstack;
@property (readonly) SAFrame *frame;
@property (readonly) NSArray *childFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)callTreeFrameWithFrame:(id)a0 startSampleIndex:(unsigned long long)a1 sampleCount:(unsigned long long)a2 isLeafFrame:(BOOL)a3;

- (void).cxx_destruct;
- (void)writeJSONDictionaryEntriesToStream:(id)a0;
- (id)initWithFrame:(id)a0 startSampleIndex:(unsigned long long)a1 sampleCount:(unsigned long long)a2 isLeafFrame:(BOOL)a3;

@end
