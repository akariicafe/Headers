@class NSData;

@interface CBAODFlipBookEntryWrapper : NSObject

@property (readonly, nonatomic) struct { unsigned int x0; BOOL x1; float x2; BOOL x3; float x4[3][3]; BOOL x5; float x6; BOOL x7; float x8; BOOL x9; float x10; float x11; BOOL x12; float x13; float x14; unsigned char x15[5]; } *entry;
@property (readonly, nonatomic) NSData *entryData;

- (void)dealloc;
- (id)description;
- (id)initWithFlipBookEntry:(struct { unsigned int x0; BOOL x1; float x2; BOOL x3; float x4[3][3]; BOOL x5; float x6; BOOL x7; float x8; BOOL x9; float x10; float x11; BOOL x12; float x13; float x14; unsigned char x15[5]; })a0;

@end
