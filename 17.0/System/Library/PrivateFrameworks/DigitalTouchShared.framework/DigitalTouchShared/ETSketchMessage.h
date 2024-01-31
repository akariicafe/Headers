@class NSArray, NSMutableArray;

@interface ETSketchMessage : ETMessage {
    NSMutableArray *_strokes;
    NSMutableArray *_colorsInMessage;
}

@property (nonatomic) BOOL hasMultipleColors;
@property (readonly, nonatomic) unsigned long long numberOfColors;
@property (nonatomic) BOOL didEndWisping;
@property (nonatomic) BOOL didDrawPoints;
@property (readonly, nonatomic) NSArray *strokes;
@property (readonly, nonatomic) NSArray *colorsInMessage;
@property (nonatomic) BOOL hideComet;

+ (unsigned short)messageType;

- (id)init;
- (id)archiveData;
- (void).cxx_destruct;
- (id)initWithArchiveData:(id)a0;
- (void)addSketchPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)convertToSimulatedPlaybackSpeed;
- (double)messageDuration;
- (BOOL)_decodeWithDoodle:(id)a0;
- (void)addSketchPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1;
- (void)addStrokeWithColor:(id)a0;
- (void)didEndWisp;
- (void)didReachRendererLimit;
- (id)messageTypeAsString;
- (void)setParentMessage:(id)a0;
- (void)willBeginWisp;

@end
