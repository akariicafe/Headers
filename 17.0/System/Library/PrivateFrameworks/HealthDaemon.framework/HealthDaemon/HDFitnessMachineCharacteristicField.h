@interface HDFitnessMachineCharacteristicField : NSObject

@property (nonatomic) BOOL flagFieldFlipped;
@property (readonly, nonatomic) unsigned char correspondingFlagBit;
@property (readonly, nonatomic) unsigned char fieldLength;
@property (readonly, nonatomic) unsigned char factor;
@property (nonatomic) BOOL isSet;

- (id)initWithCorrespondingFlagBit:(unsigned char)a0 fieldLength:(unsigned char)a1 factor:(unsigned char)a2;
- (BOOL)isIncludedInFlags:(unsigned int)a0;
- (void)setValueWithBytes:(const char **)a0 before:(const char *)a1;
- (id)valueAsData;

@end
