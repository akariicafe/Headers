@class _TtC26DocumentManagerExecutables10DOCUnicode;

@interface DocumentManagerExecutables.DOCUnicode : NSObject {
    void /* unknown type, empty encoding */ rawValue;
}

@property (class, nonatomic, readonly) _TtC26DocumentManagerExecutables10DOCUnicode *horizontalEllipsis;
@property (class, nonatomic, readonly) _TtC26DocumentManagerExecutables10DOCUnicode *nonBreakingSpace;
@property (class, nonatomic, readonly) _TtC26DocumentManagerExecutables10DOCUnicode *nonBreakingSpace_zeroWidth;
@property (class, nonatomic, readonly) _TtC26DocumentManagerExecutables10DOCUnicode *bidiIsolateBeginLRI;
@property (class, nonatomic, readonly) _TtC26DocumentManagerExecutables10DOCUnicode *bidiIsolateBeginRLI;
@property (class, nonatomic, readonly) _TtC26DocumentManagerExecutables10DOCUnicode *bidiIsolateBeginFSI;
@property (class, nonatomic, readonly) _TtC26DocumentManagerExecutables10DOCUnicode *bidiIsolateEnd;

+ (id)uc:(id)a0;
+ (id)nonBreakingSpaceWithZeroWidth:(BOOL)a0;
+ (long long)layoutDirectionForUIDirection:(long long)a0;

- (id)init;
- (void).cxx_destruct;

@end
