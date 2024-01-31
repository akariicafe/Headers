@class _PKStrokeConcrete, NSUUID, PKStrokePath;

@interface PKStrokeDelta : NSObject

@property (retain, nonatomic) _PKStrokeConcrete *deltaStroke;
@property (retain, nonatomic) PKStrokePath *deltaStrokeData;
@property (retain, nonatomic) NSUUID *_strokeUUID;

- (id)dataRepresentation;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0 error:(id *)a1;
- (void)saveToArchive:(void *)a0;

@end
