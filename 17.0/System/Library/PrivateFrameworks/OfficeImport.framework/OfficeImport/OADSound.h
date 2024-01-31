@class NSData, NSString;

@interface OADSound : OCDDelayedMedia {
    NSData *mSoundData;
    NSString *mName;
    int mSizeInBytes;
}

- (void)setName:(id)a0;
- (BOOL)isLoaded;
- (id)description;
- (int)sizeInBytes;
- (void).cxx_destruct;
- (id)name;
- (void)setSizeInBytes:(int)a0;
- (void)setSoundData:(id)a0;
- (id)soundData;

@end
