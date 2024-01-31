@class NSString;

@interface MRUNowPlayingInfo : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *artist;
@property (retain, nonatomic) NSString *album;
@property (retain, nonatomic) NSString *radio;
@property (retain, nonatomic) NSString *composer;
@property (retain, nonatomic) NSString *attribution;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *placeholder;
@property (readonly, nonatomic) BOOL showPlaceholder;
@property (nonatomic) BOOL isPlaying;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMRResponse:(id)a0 placeholder:(id)a1;
- (id)initWithIdentifier:(id)a0 title:(id)a1 artist:(id)a2 album:(id)a3 radio:(id)a4 composer:(id)a5 attribution:(id)a6 placeholder:(id)a7 showPlaceholder:(BOOL)a8 isPlaying:(BOOL)a9;
- (id)initWithMPCResponse:(id)a0 placeholder:(id)a1;
- (id)stringForComponents:(unsigned long long)a0;
- (id)stringForComponents:(unsigned long long)a0 separator:(id)a1;

@end
