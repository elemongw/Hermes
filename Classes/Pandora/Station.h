//
//  Station.h
//  Pithos
//
//  Created by Alex Crichton on 3/12/11.
//  Copyright 2011 Carnegie Mellon University. All rights reserved.
//

#import "Pandora.h"
#import "AudioStreamer.h"
#import "Song.h"

@interface Station : NSObject {
  NSString *name;
  NSString *station_id;
  NSMutableArray *songs;

  Pandora *radio;
  AudioStreamer *stream;
  Song *playing;
}

@property (retain) NSString* name;
@property (retain) NSString* station_id;
@property (retain) NSArray* songs;
@property (retain) Pandora* radio;
@property (retain) AudioStreamer* stream;
@property (retain) Song* playing;

- (void) play;
- (void) next;
- (void) pause;

@end
