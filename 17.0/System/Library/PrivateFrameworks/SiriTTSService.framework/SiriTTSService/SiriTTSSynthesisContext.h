@class NSString, NSDictionary, NSArray;

@interface SiriTTSSynthesisContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ contextInfo;
    void /* unknown type, empty encoding */ customResourceURLs;
    void /* unknown type, empty encoding */ didGenerateAudio;
    void /* unknown type, empty encoding */ didGenerateWordTimings;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) void /* unknown type, empty encoding */ voice;
@property (nonatomic) void /* unknown type, empty encoding */ privacySensitive;
@property (nonatomic, copy) NSDictionary *contextInfo;
@property (nonatomic) void /* unknown type, empty encoding */ rate;
@property (nonatomic) void /* unknown type, empty encoding */ pitch;
@property (nonatomic) void /* unknown type, empty encoding */ volume;
@property (nonatomic, copy) NSArray *customResourceURLs;
@property (nonatomic) void /* unknown type, empty encoding */ synthesisProfile;
@property (nonatomic) void /* unknown type, empty encoding */ disableCompactVoice;
@property (nonatomic, copy) id /* block */ didGenerateAudio;
@property (nonatomic, copy) id /* block */ didGenerateWordTimings;
@property (nonatomic) void /* unknown type, empty encoding */ whisper;
@property (nonatomic, retain) void /* unknown type, empty encoding */ prosodyProperties;
@property (nonatomic) void /* unknown type, empty encoding */ forceOspreyTTS;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
