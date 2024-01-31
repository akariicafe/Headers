@class NSUUID, NSString, NSSet, NSURL, NSData, CKRecordID;

@interface FlexLocalDBSong : NSManagedObject

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *artistName;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *mood;
@property (retain, nonatomic) NSString *moodAlt;
@property (retain, nonatomic) NSString *pace;
@property (nonatomic) double visualTempo;
@property (nonatomic) double arousal;
@property (nonatomic) double valence;
@property (retain, nonatomic) NSSet *genres;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSSet *regions;
@property (nonatomic) long long compatibilityVersion;
@property (nonatomic) long long songVersion;
@property (retain, nonatomic) NSURL *songBundleURL;
@property (retain, nonatomic) NSURL *artworkURL;
@property (nonatomic) long long artVersion;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL recalled;
@property (retain, nonatomic) NSString *format;
@property (retain, nonatomic) NSString *audioEncoderPresetName;
@property (retain, nonatomic) NSData *recordData;
@property (readonly, nonatomic) BOOL canPlay;
@property (retain, nonatomic) NSSet *genreStrings;
@property (retain, nonatomic) NSSet *regionStrings;
@property (readonly, nonatomic) NSSet *tagIDs;
@property (retain, nonatomic) CKRecordID *recordID;

@end
