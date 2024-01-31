@class NSMutableArray;

@interface CBAODFlipBookWrapper : NSObject {
    NSMutableArray *_flipBookData;
}

@property (readonly, nonatomic) struct { unsigned char version; unsigned int sizeOfHeader; unsigned int sizeOfEntry; unsigned int numberOfUpdates; unsigned short frequency; float length; float ambient; } header;
@property (readonly, nonatomic) struct { float brightness; float brightnessLimit; float pccFactor; float twilightStrength; float twilightLux; float ammoliteStrength; float ammoliteLux; struct { float matrix[3][3]; struct { float x; float y; } xy; float Y; } whitepoint; } origin;
@property (readonly, nonatomic) unsigned long long entryCount;
@property (nonatomic) double submissionTimestamp;

- (void)dealloc;
- (id)description;
- (id)newFlipBookData;
- (BOOL)getEntry:(struct { unsigned int x0; BOOL x1; float x2; BOOL x3; float x4[3][3]; BOOL x5; float x6; BOOL x7; float x8; BOOL x9; float x10; float x11; BOOL x12; float x13; float x14; unsigned char x15[5]; } *)a0 forID:(long long)a1;
- (BOOL)isValidEntryID:(long long)a0;
- (void)appendFlipBookEntry:(struct { unsigned int x0; BOOL x1; float x2; BOOL x3; float x4[3][3]; BOOL x5; float x6; BOOL x7; float x8; BOOL x9; float x10; float x11; BOOL x12; float x13; float x14; unsigned char x15[5]; } *)a0;
- (id)initWithHeader:(struct { unsigned char x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; float x5; float x6; })a0 andOrigin:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; struct { float x0[3][3]; struct { float x0; float x1; } x1; float x2; } x7; })a1;

@end
