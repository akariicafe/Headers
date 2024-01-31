@class NSString, AVPlayerItem, NSArray, NSDate, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AVPlayerInterstitialEvent : NSObject <NSCopying> {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    AVPlayerItem *_primaryItem;
    struct OpaqueFigPlayerInterstitialEvent { } *_figEvent;
    NSArray *_templateItems;
}

@property (readonly, weak, nonatomic) AVPlayerItem *primaryItem;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSArray *templateItems;
@property (readonly, nonatomic) unsigned long long restrictions;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } resumptionOffset;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } playoutLimit;
@property (readonly, nonatomic) BOOL alignsStartWithPrimarySegmentBoundary;
@property (readonly, nonatomic) BOOL alignsResumptionWithPrimarySegmentBoundary;
@property (readonly, nonatomic) NSString *cue;
@property (readonly, nonatomic) BOOL willPlayOnce;
@property (readonly, nonatomic) NSDictionary *userDefinedAttributes;
@property (readonly, nonatomic) NSDictionary *assetListResponse;

+ (id)interstitialEventWithPrimaryItem:(id)a0 date:(id)a1;
+ (id)interstitialEventWithPrimaryItem:(id)a0 identifier:(id)a1 date:(id)a2 templateItems:(id)a3 restrictions:(unsigned long long)a4 resumptionOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 playoutLimit:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 userDefinedAttributes:(id)a7;
+ (id)interstitialEventWithPrimaryItem:(id)a0 identifier:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 templateItems:(id)a3 restrictions:(unsigned long long)a4 resumptionOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 playoutLimit:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 userDefinedAttributes:(id)a7;
+ (id)interstitialEventWithPrimaryItem:(id)a0 templateItems:(id)a1 figEvent:(struct OpaqueFigPlayerInterstitialEvent { } *)a2;
+ (id)interstitialEventWithPrimaryItem:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (id)newItemArrayWithCopiedItems:(id)a0;

- (void)setTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)setIdentifier:(id)a0;
- (void)setDate:(id)a0;
- (BOOL)validate:(int *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRestrictions:(unsigned long long)a0;
- (void)checkMutability;
- (void)setPrimaryItem:(id)a0;
- (void)setCue:(id)a0;
- (id)_internalTemplateItems;
- (id)assetURLsReturningError:(id *)a0;
- (struct OpaqueFigPlayerInterstitialEvent { } *)figEvent;
- (id)initWithPrimaryItem:(id)a0 identifier:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 date:(id)a3 templateItems:(id)a4 restrictions:(unsigned long long)a5 resumptionOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 playoutLimit:(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 userDefinedAttributes:(id)a8;
- (id)initWithPrimaryItem:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 date:(id)a2;
- (id)initWithPrimaryItemAndFigEvent:(id)a0 templateItems:(id)a1 figEvent:(struct OpaqueFigPlayerInterstitialEvent { } *)a2;
- (void)setAlignsResumptionWithPrimarySegmentBoundary:(BOOL)a0;
- (void)setAlignsStartWithPrimarySegmentBoundary:(BOOL)a0;
- (void)setImmutable;
- (void)setPlayoutLimit:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setResumptionOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setTemplateItems:(id)a0;
- (void)setUserDefinedAttributes:(id)a0;
- (void)setWillPlayOnce:(BOOL)a0;

@end
