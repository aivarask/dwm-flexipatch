{
  inputs = { };
  outputs = { self, ... } @ inputs: {
    overlays.default = final: prev: {
      dwm =
        prev.dwm.overrideAttrs
          (_oldAttrs: {
            src = ./.;
            conf = ./config.h;
          });
    };
  };
}
