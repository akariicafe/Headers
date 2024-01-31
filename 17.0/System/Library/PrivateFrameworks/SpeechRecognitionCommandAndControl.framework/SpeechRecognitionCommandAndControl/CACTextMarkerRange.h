@class CACTextMarker;

@interface CACTextMarkerRange : NSObject

@property (readonly, nonatomic) CACTextMarker *startMarker;
@property (readonly, nonatomic) CACTextMarker *endMarker;

+ (id)markerRangeWithArray:(id)a0;
+ (id)markerRangeWithNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)markerRangeWithStartMarker:(id)a0 endMarker:(id)a1;
+ (id)markerRangeWithStartMarker:(id)a0 endMarker:(id)a1 forTextElement:(id)a2;

- (unsigned long long)hash;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nsRange;
- (id)description;
- (void).cxx_destruct;
- (id)array;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsRange:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (BOOL)containsMarker:(id)a0;
- (id)initWithStartMarker:(id)a0 endMarker:(id)a1;

@end
