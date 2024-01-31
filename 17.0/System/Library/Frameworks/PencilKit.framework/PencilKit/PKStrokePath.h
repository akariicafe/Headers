@class NSUUID, NSDate;

@interface PKStrokePath : NSObject <NSCopying> {
    struct PKStrokePathPointsPrivate { struct shared_ptr<PKStrokePathPointsShared> { struct PKStrokePathPointsShared *__ptr_; struct __shared_weak_count *__cntrl_; } constants; struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } pointsData; } _strokeDataPointsPrivate;
    struct shared_ptr<PKProtobufUnknownFields> { struct PKProtobufUnknownFields *__ptr_; struct __shared_weak_count *__cntrl_; } _unknownFields;
    BOOL _didValidateTimestamps;
    BOOL _hasValidTimestampData;
    double _cachedMaxWidth;
}

@property (readonly, nonatomic) unsigned long long _pointsCount;
@property (readonly, nonatomic) unsigned long long _startIndex;
@property (readonly, nonatomic) long long _inputType;
@property (readonly, nonatomic) BOOL hasValidPointTimestampData;
@property (readonly, nonatomic) unsigned long long _immutablePointsCount;
@property (readonly, nonatomic) NSUUID *_strokeDataUUID;
@property (readonly, nonatomic) double _timestamp;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSDate *creationDate;

+ (void)_calculateOffsets:(unsigned long long *)a0 sizes:(unsigned long long *)a1;
+ (void)calculateOffsets;
+ (id)strokeDataFromDataArchive:(const void *)a0;

- (id)rawValue;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (double)radiusAtIndex:(unsigned long long)a0;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)_maxWidth;
- (struct CGPoint { double x0; double x1; })locationAtIndex:(unsigned long long)a0;
- (id)pointAtIndex:(unsigned long long)a0;
- (double)timestampAtIndex:(unsigned long long)a0;
- (id)initWithRawValue:(id)a0;
- (void)enumerateInterpolatedPointsInRange:(id)a0 strideByDistance:(double)a1 usingBlock:(id /* block */)a2;
- (struct PKCompressedStrokePoint { struct _PKPoint { float x0; float x1; } x0; float x1; float x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; float x9; })_compressedPointAt:(unsigned long long)a0;
- (void)_enumerateInterpolatedPointsInRange:(id)a0 incrementBlock:(id /* block */)a1 usingBlock:(id /* block */)a2;
- (unsigned int)_legacyRandomSeed;
- (struct CGPath { } *)_newPathRepresentation;
- (void)_transform:(id /* block */)a0;
- (BOOL)canApplyDelta:(id)a0;
- (id)copyTransformed:(id /* block */)a0;
- (id)dataApplying:(id)a0;
- (struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })decompressedPointAt:(unsigned long long)a0;
- (BOOL)deltaContainsNewInfo:(id)a0;
- (id)deltaTo:(id)a0;
- (void)enumerateInterpolatedPointsInRange:(id)a0 strideByParametricStep:(double)a1 usingBlock:(id /* block */)a2;
- (void)enumerateInterpolatedPointsInRange:(id)a0 strideByTime:(double)a1 usingBlock:(id /* block */)a2;
- (BOOL)inflight;
- (id)initWithControlPoints:(id)a0 creationDate:(id)a1;
- (id)initWithData:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 UUID:(id)a2;
- (id)initWithDataPoints:(struct PKStrokePathPointsPrivate { struct shared_ptr<PKStrokePathPointsShared> { struct PKStrokePathPointsShared *x0; struct __shared_weak_count *x1; } x0; struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; } x1; })a0 immutableCount:(unsigned long long)a1 inputType:(long long)a2 UUID:(id)a3 didValidateTimestamps:(BOOL)a4 hasValidTimestampData:(BOOL)a5 cachedMaxWidth:(double)a6 unknownFields:(struct shared_ptr<PKProtobufUnknownFields> { struct PKProtobufUnknownFields *x0; struct __shared_weak_count *x1; })a7;
- (id)initWithPoints:(struct PKCompressedStrokePoint { struct _PKPoint { float x0; float x1; } x0; float x1; float x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; float x9; } *)a0 count:(unsigned long long)a1 immutableCount:(unsigned long long)a2 inputType:(long long)a3 timestamp:(double)a4 UUID:(id)a5;
- (struct CGPoint { double x0; double x1; })interpolatedLocationAt:(double)a0;
- (id)interpolatedPointAt:(double)a0;
- (double)interpolatedTimeoffsetAt:(double)a0;
- (struct CGPoint { double x0; double x1; })locationOnSegment:(unsigned long long)a0 t:(double)a1;
- (double)parametricValue:(double)a0 offsetByDistance:(double)a1;
- (double)parametricValue:(double)a0 offsetByTime:(double)a1;
- (void)readStrokeDataFromArchive:(const void *)a0;
- (BOOL)saveToDataArchive:(void *)a0;
- (void)setLocation:(struct CGPoint { double x0; double x1; })a0 atIndex:(unsigned long long)a1;
- (void)setPoints:(struct PKCompressedStrokePoint { struct _PKPoint { float x0; float x1; } x0; float x1; float x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; float x9; } *)a0 pointsCount:(unsigned long long)a1 timestamp:(double)a2;
- (void)setPointsFrom:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
